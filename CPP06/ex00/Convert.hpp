#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>

class Convert
{
    private:
        int     _intVal;
        float   _floatVal;
        double  _doubleVal;
        char    _charVal;

    public:
        Convert();
        Convert(std::string str);
        Convert(Convert const & cpy);
        ~Convert();

        Convert & operator=(Convert const & cpy);

        int     getInt(void) const;
        float   getFloat(void) const;
        double  getDouble(void) const;
        char    getChar(void) const;

        void    intTo(std::string str);
        void    charTo(std::string str);
        void    floatTo(std::string str);
        void    doubleTo(std::string str);

        void    display(int lenPrecision);
};

#endif