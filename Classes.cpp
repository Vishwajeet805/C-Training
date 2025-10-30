#include <stdio.h>

class outer 
{
    public:
    class inner
    {
        public
        void display()
        {   
            std::cin<<"Inner class\n";
        }
    };
};
