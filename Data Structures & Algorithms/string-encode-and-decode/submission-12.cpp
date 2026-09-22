class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string; 
        for(string s : strs){
            encoded_string += to_string(s.size()) + "#" + s;
        }
        return encoded_string;

    }
// std::find searches a range using [start, end) and looks for a value
//s.find(thing_to_find, starting_position);
//s.substr(start, length)

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while( i < s.size()){
            int pos = s.find("#", i);
            int length = stoi(s.substr(i, pos - i));
            int start = pos + 1;
            result.push_back(s.substr(start, length));
            i = start + length; 

        }
        return result;

    }
};
