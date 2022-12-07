template <typename T, typename Container = std::deque<T> >
class MutantStack
{
public:
    typedef          Container                          container_type;
    typedef typename Container::value_type              value_type;
    typedef typename Container::size_type               size_type;
    typedef typename Container::reference               reference;
    typedef typename Container::const_reference         const_reference;
    typedef typename Container::iterator                iterator;
    typedef typename Container::const_iterator          const_iterator;
    typedef typename Container::reverse_iterator        reverse_iterator;
    typedef typename Container::const_reverse_iterator  const_reverse_iterator;

protected:
    container_type c;

public:
    MutantStack(): c() {}
    MutantStack(const MutantStack& other): c(other.c) {}
    MutantStack& operator=(const MutantStack& other) {
        c = other.c;
    }
    ~MutantStack() {};

    reference   top() {
        return c.back();
    }
    const_reference top() const {
        return c.back();
    }

    bool emptry() const {
        return c.empty();
    }

    size_type size() const {
        return c.size();
    }

    void push(const value_type& value) {
        c.push_back(value);
    }

    void pop() {
        c.pop_back();
    }

    container_type& baseContainer() {
        return c;
    }
    const container_type& baseContainer() const {
        return c;
    }

    iterator begin() {
        return c.begin();
    }
    const_iterator begin() const {
        return c.begin();
    }

    reverse_iterator rbegin() {
        return c.rbegin();
    }
    const_reverse_iterator rbegin() const {
        return c.rbegin();
    }

    iterator end() {
        return c.end();
    }
    const_iterator end() const {
        return c.end();
    }

    reverse_iterator rend() {
        return c.rend();
    }
    const_reverse_iterator rend() const {
        return c.rend();
    }
};

template <typename T, typename Container>
bool operator==(const MutantStack<T, Container>& lhs, const MutantStack<T, Container>& rhs) {
    return !(lhs < rhs || rhs < lhs) ;
}

template <typename T, typename Container>
bool operator!=(const MutantStack<T, Container>& lhs, const MutantStack<T, Container>& rhs) {
    return (lhs < rhs || rhs < lhs) ;
}

template <typename T, typename Container>
bool operator<(const MutantStack<T, Container>& lhs, const MutantStack<T, Container>& rhs) {
    return (lhs.baseContainer() < rhs.baseContainer());
}

template <typename T, typename Container>
bool operator<=(const MutantStack<T, Container>& lhs, const MutantStack<T, Container>& rhs) {
    return !(rhs < lhs);
}

template <typename T, typename Container>
bool operator>(const MutantStack<T, Container>& lhs, const MutantStack<T, Container>& rhs) {
    return (rhs < lhs);
}

template <typename T, typename Container>
bool operator>=(const MutantStack<T, Container>& lhs, const MutantStack<T, Container>& rhs) {
    return !(lhs < rhs);
}
