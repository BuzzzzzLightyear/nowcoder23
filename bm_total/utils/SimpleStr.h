//
// Created by 刘健 on 2023/3/7.
//

#ifndef BM_TOTAL_SIMPLESTR_H
#define BM_TOTAL_SIMPLESTR_H

#include<iostream>

#include<string.h>

#include<assert.h>

using namespace std;
namespace WGX//建一个空间域
{
class string
{
public:
    typedef char* iterator;//迭代器
    typedef const char* const_iterator;
    const_iterator begin() const
    {
        return _str;
    }

    const_iterator end()const
    {
        return _str + _size;
    }

    iterator begin()
    {
        return _str;
    }

    iterator end()
    {
        return _str + _size;
    }
    string(const char* str="")//构造函数
    :_size(strlen(str))
    ,_capacity(_size)
    {
        _str = new char[_capacity + 1];
        strcpy(_str, str);
    }
    //string(const string& s) // 传统写法
    //	:_size(s._size)
    //	,_capacity(s._capacity)
    //{
    //	_str = new char[_capacity + 1];
    //	strcpy(_str, s._str);
    //}
    void swap(string& s)
    {
        std::swap(_str, s._str);
        std::swap(_size, s._size);
        std::swap(_capacity, s._capacity);
    }
    string(const string& s)
    :_str(nullptr)
    ,_size(0)
    ,_capacity(0)
    {
        string tmp(s._str);
        swap(tmp);
    }
    //string operator =(string& s)//传统写法
    //{
    //	if (this != &s)
    //	{
    //		string tmp(s);
    //		_str = new char[strlen(s._str) + 1];
    //		strcpy(_str, tmp._str);
    //		_size = s._size;
    //		_capacity = s._capacity;
    //	}
    //	return *this;
    //}
    string operator =(string s)//现代写法
    {
        swap(s);//s是传值，相当与赋值，构造了一个函数
        return *this;
    }

            ~string()
            {
        delete _str;
        _str = nullptr;
        _size = 0;
        _capacity = 0;
            }
            size_t size()
            {
        return _size;
            }
            const char* c_str()
            {
        return _str;
            }
            char& operator[](size_t pos)
            {
        assert(pos < _size);
        return _str[pos];
            }
            const char& operator[](size_t pos)const
            {
        assert(pos < _size);
        return _str[pos];
            }
            void reserve(size_t n)
            {
        if (n > _capacity)
        {
            char* tmp = new char[n + 1];
            strcpy(tmp, _str);
            delete _str;
            _str = tmp;//tmp是个临时变量，出了作用域就会自动销毁
            _capacity = n;
        }
            }
            void resize(size_t n,char ch='\0')
            {
        if (n <= _size)
        {
            _size = n;
            _str[_size] = '\0';
        }
        else
        {
            if (n > _capacity)
            {
                reserve(n);
            }
            memset(_str + _size, ch, n - _size);
            _size = n;
            _str[_size] = '\0';
        }
            }
            void push_back(char ch)
            {
        if (_size ==_capacity)
        {
            reserve(_capacity == 0 ? 4 : 2 * _capacity);
        }
        _str[_size] = ch;
        _size++;
        _str[_size] = '\0';
            }
            void append(char* str)
            {
        size_t len = strlen(str);
        if (_size + len > _capacity)
        {
            reserve(_size + len);
        }
        strcpy(_str + _size, str);
        _size = _size + len;
            }
            string& operator+=(char ch)
                    {
        push_back(ch);
        return *this;
                    }
                    string& operator+=(char* str)
                            {
        append(str);
        return *this;
                            }
                            size_t find(char ch)
                            {
        for (size_t i = 0; i < _size; i++)
        {
            if (_str[i] == ch)
            {
                return i;
            }
        }
        return npos;
                            }
                            size_t find(char* str, size_t pos = 0)
                            {
        const char* ptr = strstr(_str+pos,str);
        return ptr-_str;//返回位置，把字串的地址，减去字符串的地址，就是位置了
                            }
private:
    char* _str;
    std::size_t _size;
    std::size_t _capacity;
    static const size_t npos;

};
    const size_t string::npos = -1;
}
#endif //BM_TOTAL_SIMPLESTR_H
