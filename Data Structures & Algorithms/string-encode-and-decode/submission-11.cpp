class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string; 
        for(string s : strs){
            encoded_string += to_string(s.size()) + "#" + s;
        }
        return encoded_string;

    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while( i < s.size()){
            //find can be used on any array container params are start/end
            int pos = s.find("#", i);
            //start at 0 end at 
            int length = stoi(s.substr(i, pos - i));
            int start = pos + 1;
            result.push_back(s.substr(start, length));
            i = start + length; 

        }
        return result;

    }
};
