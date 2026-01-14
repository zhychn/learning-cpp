#include <iostream>
#include <string>
#include <iomanip>
int main() {
    std::string name = "";
    int age = 0;
    double height = 0.0;
    double weight = 0.0;
    bool isLikeCoding = false;
    int temp = 0;

    std::cout << "请输入你的姓名（不要有空格）:";
    std::cin >> name;
    std::cout << "请输入你的年龄:";
    
    //输入年龄
    while (!(std::cin >> age) || age < 1 || age > 150) {
        std::cout << "输入无效！请输入1-150之间的整数：";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    //输入身高
    std::cout << "请输入你的身高（米）:";
    while (!(std::cin >> height) || height < 0.5 || height > 2.5) {
        std::cout << "输入无效！请输入0.5-2.5之间的数值：";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    //输入体重
    std::cout << "请输入你的体重（kg）:";
    while (!(std::cin >> weight) || weight < 10 || weight > 300) {
        std::cout << "输入无效！请输入10-300之间的数值：";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    
    //计算BMI
    double bmi = weight / (height * height);
    
    //输入是否喜欢编程
    std::cout << "你喜欢编程吗？(1=是，0=否):";
    while (!(std::cin >> temp) || !(temp == 0 || temp == 1)) {
        std::cout << "输入无效！请输入0或1：";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    isLikeCoding = (temp == 1);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n=== 个人信息报告 ===\n";
    std::cout << "姓名: " << name << "\n";
    std::cout << "年龄: " << age << " 岁\n";
    std::cout << "身高: " << height << " 米\n";
    std::cout << "体重: " << weight << " 公斤\n";
    std::cout << "BMI指数: " << bmi << "\n";
    std::cout << "喜欢编程: " << (isLikeCoding ? "是\n" : "否\n");
    /*
    if (isLikeCoding==1)
        std::cout << "是\n";
    else
        std::cout << "否\n";
    */

    // BMI 评价
    if (bmi < 18.5) {
        std::cout << "BMI评价: 体重过轻\n";
    } else if (bmi < 24) {
        std::cout << "BMI评价: 正常范围\n";
    } else if (bmi < 28) {
        std::cout << "BMI评价: 超重\n";
    } else {
        std::cout << "BMI评价: 肥胖\n";
    }

    return 0;
}