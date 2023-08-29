#ifndef ARRAY_HPP
# define ARRAY_HPP

template < typename T >
class Array
{
    public:
        Array() 
        {
            this->_array = new T[0]; 
            this->_size = 0;
        };
        Array(unsigned int n)
        {
            this->_array = new T[n];
            this->_size = n;
        };
        Array(Array const & array)
        {
            this->_size = array._size;
            this->_array = new T[array.size()];
            for (int i = 0; i < array.size(); i++)
                this->_array[i] = array[i];
        }
        ~Array()
        {
            delete this->_array;
        };

        T operator=(Array const & array)
        {
            delete [] this->_array;
            this->_array = new T[array.size()];
            for (int i = 0; i < array.size(); i++)
                this->_array[i] = array[i];
        }

        T & operator[](unsigned int i)
        {
            if (i < 0 || i >= _size)
                throw(std::exception());
            return (this->_array[i]);
        }

        unsigned int size() 
        {
            return(this->_size);
        }

        void    printArray()
        {
            for (unsigned int i = 0; i < this->_size; i++)
                std::cout << "[" << i << "] -> " << _array[i] << std::endl;
        }


    private:
        T*           _array;
        unsigned int _size;
};

#endif