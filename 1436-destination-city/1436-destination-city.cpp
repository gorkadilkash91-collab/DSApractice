class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> sources;   //  saari "source" cities rakhenge isme

        //  har path ki pehli city (cityA) ko table mai dala
        for (int i = 0; i < paths.size(); i++) {
            sources.insert(paths[i][0]);
        }

        // har path ki doosri city (cityB) check kari
        for (int i = 0; i < paths.size(); i++) {
            string cityB = paths[i][1];

            // agar ye city dabbe mein NAHI hai, matlab kabhi source nahi bani
            if (sources.find(cityB) == sources.end()) {
                return cityB;   // yahi destination hai
            }
        }

        return "";
    }
};