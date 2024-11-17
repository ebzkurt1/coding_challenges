#ifndef _HUFF_NODE_
#define _HUFF_NODE_


class HuffNode {
    public:
        bool is_leaf;
        int weight;
};


class HuffLeafNode : public HuffNode{
    private:
        char _element;
        int _weight;
    public:
        HuffLeafNode (char el, int wt)
            { _element = el; _weight = wt; }
        
        char value ()
            { return _element; }

        int weight ()
            { return _weight; }

        bool is_leaf ()
            { return false; }
};


class HuffInternalNode : public HuffNode {
    private:
        int _weight;
        HuffNode left_node;
        HuffNode right_node;
    public:
        HuffInternalNode (HuffNode l, HuffNode r, int wt)
            { left_node = l; right_node = r; _weight = wt; }

        HuffNode left()
            { return left_node; }

        HuffNode right ()
            { return right_node; }

        int weight ()
            { return _weight; }

        bool is_leaf ()
            { return false; }
};


class HuffTree {
    private:
        HuffNode root;
    public:
        HuffTree (char el, int wt)
            { root = new HuffLeafNode(el, wt); }

        HuffTree (HuffNode l, HuffNode r, int wt)
            { root = new HuffInternalNode(l, r, wt); }

        HuffNode get_root ()
            { return root; }

        int weight ()
            { return root.weight(); }

        int compare_trees (HuffTree t) {
            if (root.weight() < t.weight())
                return -1;
            else if (root.weight())
                return 0;
            else
                return 1;
        }
};


#endif

