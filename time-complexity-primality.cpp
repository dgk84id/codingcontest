// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/time-complexity-primality.html .

string primality(int n) {
    if (n <= 1) {
        return "Not prime";
    }
    if (n <= 3) {
        return "Prime";
    }
    for (int i = 2; i <= floor(sqrt(n)); i++) {
        if (n % i == 0) {
            return "Not prime";
        }
    }
    return "Prime";
}
