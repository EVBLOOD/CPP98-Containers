// page 525
namespace std {
    template <class Key, class Compare = less<Key>,
    class Allocator = allocator<Key> >
    class set {
        public:
        // types:
            typedef Key key_type;
            typedef Key value_type;
            typedef Compare key_compare;
            typedef Compare value_compare;
            typedef Allocator allocator_type;
            typedef typename Allocator::reference reference;
            typedef typename Allocator::const_reference const_reference;
            typedef implementation defined iterator; // See 23.1
            typedef implementation defined const_iterator; // See 23.1
            typedef implementation defined size_type; // See 23.1
            typedef implementation defined difference_type;// See 23.1
            typedef typename Allocator::pointer pointer;
            typedef typename Allocator::const_pointer const_pointer;
            typedef std::reverse_iterator<iterator> reverse_iterator;
            typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
            // 23.3.3.1 construct/copy/destroy:
            explicit set(const Compare& comp = Compare(),
            const Allocator& = Allocator());
            template <class InputIterator>
            set(InputIterator first, InputIterator last,
            const Compare& comp = Compare(), const Allocator& = Allocator());
            set(const set<Key,Compare,Allocator>& x);
            ~set();
            set<Key,Compare,Allocator>& operator=
            (const set<Key,Compare,Allocator>& x);
            allocator_type get_allocator() const;
            // iterators:
            iterator begin();
            const_iterator begin() const;
            iterator end();
            const_iterator end() const;
            reverse_iterator rbegin();
            const_reverse_iterator rbegin() const;
            reverse_iterator rend();
            const_reverse_iterator rend() const;
            // capacity:
            bool empty() const;
            size_type size() const;
            size_type max_size() const;
            // modifiers:
            pair<iterator,bool> insert(const value_type& x);
            iterator insert(iterator position, const value_type& x);
            template <class InputIterator>
            void insert(InputIterator first, InputIterator last);
            void erase(iterator position);
            size_type erase(const key_type& x);
            void erase(iterator first, iterator last);
            void swap(set<Key,Compare,Allocator>&);
            void clear();
            // observers:
            key_compare key_comp() const;
            value_compare value_comp() const;
            // set operations:
            iterator find(const key_type& x) const;
            size_type count(const key_type& x) const;
            iterator lower_bound(const key_type& x) const;
            iterator upper_bound(const key_type& x) const;
            pair<iterator,iterator> equal_range(const key_type& x) const;
    };
    template <class Key, class Compare, class Allocator>
    bool operator==(const set<Key,Compare,Allocator>& x,
    const set<Key,Compare,Allocator>& y);
    template <class Key, class Compare, class Allocator>
    bool operator< (const set<Key,Compare,Allocator>& x,
    const set<Key,Compare,Allocator>& y);
    template <class Key, class Compare, class Allocator>
    bool operator!=(const set<Key,Compare,Allocator>& x,
    const set<Key,Compare,Allocator>& y);
    template <class Key, class Compare, class Allocator>
    bool operator> (const set<Key,Compare,Allocator>& x,
    const set<Key,Compare,Allocator>& y);
    template <class Key, class Compare, class Allocator>
    bool operator>=(const set<Key,Compare,Allocator>& x,
    const set<Key,Compare,Allocator>& y);
    template <class Key, class Compare, class Allocator>
    bool operator<=(const set<Key,Compare,Allocator>& x,
    const set<Key,Compare,Allocator>& y);
    // specialized algorithms:
    template <class Key, class Compare, class Allocator>
    void swap(set<Key,Compare,Allocator>& x,
    set<Key,Compare,Allocator>& y);
}