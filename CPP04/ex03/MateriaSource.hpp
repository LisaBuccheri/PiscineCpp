#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_mat[4];
        
    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const & cpy );
        virtual ~MateriaSource();

        MateriaSource& operator=(MateriaSource const & cpy);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const &type);
};