class Solution {
public:
    string sortVowels(string s) {
        
        // 26 size ke do count arrays banaye — ek lowercase vowels ke liye,
        // ek uppercase vowels ke liye. Har index kisi letter ko represent karta hai
        // (index 0 = 'a'/'A', index 4 = 'e'/'E', waghera)
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        // ============ STEP 1: Vowels count karo aur unki jagah placeholder rakho ============
        for (int i = 0; i < s.size(); i++) {
            
            // check karo ki current character lowercase vowel hai ya nahi
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                
                // us vowel ka count badhao. 's[i]-'a'' se hume uska index milta hai
                // (jaise 'e'-'a' = 4, toh lower[4] badhega)
                lower[s[i] - 'a']++;
                
                // is position ko '#' se replace kar diya — taaki baad mein pata chale
                // "yahan pehle koi vowel tha, ab yahan sorted vowel bharna hai"
                s[i] = '#';
            }
            // agar lowercase vowel nahi tha, toh check karo uppercase vowel hai ya nahi
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                
                // uppercase vowel ka count badhao, same tarike se
                upper[s[i] - 'A']++;
                
                // yahan bhi placeholder daal diya
                s[i] = '#';
            }
            // agar consonant hai, toh kuch nahi karna — wo apni jagah waisa hi rahega
        }

        // ============ STEP 2: Sorted vowels ka ek naya string banao ============
        string ans;  // yahan hum sorted order mein saare vowels jama karenge

        // pehle saare UPPERCASE vowels daalenge, kyunki ASCII mein
        // capital letters, small letters se pehle (chhoti value) aate hain
        for (int i = 0; i < 26; i++) {
            
            // current letter nikalo (i=0 → 'A', i=4 → 'E', waghera)
            char c = 'A' + i;
            
            // jitni baar ye letter count hua tha, utni baar use ans mein daalo
            while (upper[i]) {
                ans += c;
                upper[i]--;   // ek use ho gaya, count ghatao
            }
        }
        
        // ab saare LOWERCASE vowels daalenge, uppercase ke baad
        // (kyunki lowercase ki ASCII value badi hoti hai, ye baad mein aane chahiye)
        for (int i = 0; i < 26; i++) {
            
            // current letter nikalo (i=0 → 'a', i=4 → 'e', waghera)
            char c = 'a' + i;
            
            // jitni baar ye letter count hua tha, utni baar use ans mein daalo
            while (lower[i]) {
                ans += c;
                lower[i]--;   // ek use ho gaya, count ghatao
            }
        }

        // ============ STEP 3: Sorted vowels ko wapas '#' waali jagah bharo ============
        
        // 'first' poori string 's' ko traverse karega (dhundega '#' kahan kahan hai)
        // 'second' sorted 'ans' string ko traverse karega (agla vowel kaunsa bharna hai)
        int first = 0, second = 0;

        // jab tak saare sorted vowels use nahi ho jaate, loop chalao
        while (second < ans.size()) {
            
            // agar current position pe '#' mila (matlab yahan pehle vowel tha)
            if (s[first] == '#') {
                
                // toh yahan sorted vowels array ka agla element bhar do
                s[first] = ans[second];
                
                // sorted array mein agle vowel ki taraf badho
                second++;
            }
            // agar '#' nahi mila (consonant hai), toh kuch nahi karna,
            // bas 'first' ko aage badhao — us position ko chhod do
            
            first++;
        }

        // ab 's' mein consonants apni original jagah pe hain,
        // aur vowels sorted order mein bhar chuke hain
        return s;
    }
};