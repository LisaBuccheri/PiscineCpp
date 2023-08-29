#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    for (int i = 0; i < 4; i++)
        this->_mat[i] = NULL;
    return ;
}

MateriaSource::MateriaSource( MateriaSource const & cpy )
{
    for (int i = 0; i < 4; i++)
        this->_mat[i] = cpy._mat[i];

    return ;
}

MateriaSource::~MateriaSource()
{
    return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & cpy )
{
    //penser a delete les mat avant de reinstancier les nouveau mat 
    for (int i = 0; i < 4; i++)
        this->_mat[i] = cpy._mat[i];
    
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_mat[i])
        {
            this->_mat[i] = m;
            break ;
        }
    }
    return ;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (this->_mat[i] && this->_mat[i]->getType() == type)
            return (this->_mat[i]->clone());
    return (0);
}
