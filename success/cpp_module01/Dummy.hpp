#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include <string>

# include "ATarget.hpp"

class Dummy: public ATarget
{
    private:

    public:
        Dummy();
        ~Dummy();
        virtual ATarget* clone() const;
};

#endif