> **Problem Number:** 297 <br>
> **Problem Name:** Serialize and Deserialize Binary Tree <br>
> **Link:** [https://leetcode.com/problems/serialize-and-deserialize-binary-tree/](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)

    class Codec {
    public:

        // Encodes a tree to a single string.
        string serialize(TreeNode* root) {
            uintptr_t address = reinterpret_cast<uintptr_t>(root);
            string s = to_string(address);
            return s;
        }

        // Decodes your encoded data to tree.
        TreeNode* deserialize(string data) {
            uintptr_t intAddress= stoull(data);
            TreeNode* address = reinterpret_cast<TreeNode*>(intAddress);
            return address;
        }
    };
