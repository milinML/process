#include <iostream>
#include<algorithm>
#include<string>
#include<vector>

//使用Lambda表达式和`std::sort`对一个字符串数组按长度排序


int main() {
    std::vector<std::string>  array ={"apple", "oranges","bananasdsa"};
    std::string  strarray[3] = {"apple", "oranges","bananasdsa"};
    for(auto num : array){
        std::cout<<num<<' ';
    }
    std::cout<<std::endl;
std::sort(array.begin(), array.end(),[](std::string a, std::string b)
                    { return a.length()>b.length();});

    for(auto num : array){
        std::cout<<num<<' ';
    }
    std::cout<<std::endl;
    return 0;
}
