/*
 * Itay Volk <ivolk@scu.edu>,
 * David Chousal Cantu <dchousal@scu.edu>,
 * Ding-Shiuan Yang <dyang2@scu.edu>,
 * Rushil Kumar <rkumar3@scu.edu>,
 * Alexander Anokhin <aanokhin@scu.edu>
 * recipe for containers using C-style array
 */
#ifndef BAG_H
#define BAG_H
namespace csen79 {

class Bag {
public:
    using Data = int;   // create an alias for the data
    Bag(): data{nullptr}, first{0}, count{0}, DATASIZE{0} {}

    // rule of 5
    ~Bag();
    Bag(const Bag &);
    Bag(Bag &&);
    Bag &operator=(const Bag &);
    Bag &operator=(Bag &&rhs);

    // access functions
    void enQ(const Data &);
    Data deQ();
    void print() const;

private:
    // data storage
    int first;
    int count;
    size_t DATASIZE;    // array size
    Data* data;
};

}
#endif // BAG_H