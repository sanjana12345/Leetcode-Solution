class Solution {
public:
    bool judgeCircle(string moves) {int i;
                                    int y = 0;
        int x = 0;
        for (auto command : moves){
            if (command == 'U') ++y;
            if (command == 'D') --y;
            if (command == 'R') ++x;
            if (command == 'L') --x;
        }
        return y == 0 && x == 0;
        }
};
