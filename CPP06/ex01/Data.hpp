#ifndef DATA_HPP
# define DATA_HPP

# include <string>

class Data
{
    private:
        std::string _str;

    public:
        Data();
        Data(std::string str);
        Data(Data const &cpy);
        ~Data();

        Data& operator=(Data const &cpy);

        std::string getStr();
};

#endif
