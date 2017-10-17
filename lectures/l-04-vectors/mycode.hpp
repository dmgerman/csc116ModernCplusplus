template <typename T> 
void print_vector(std::string prefix, const std::vector<T> &vec)
{
    std::cout << prefix << " size: " << vec.size() << " values: [";

    for(auto v: vec) {
        std::cout << v << " " ;
    } 
    std::cout << "]"<< std::endl;
}
