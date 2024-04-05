#include <string>
#include <vector>

std::string extractWords(const std::string& sentence, int start, int end) {
    if (start > end || start >= sentence.length() || end >= sentence.length())
        return "";

    std::string result;
    int i = start;
    while (i <= end && sentence[i] != ' ') {
        result += sentence[i];
        i++;
    }
    if (i <= end)
        result += ' ';
    return result + extractWords(sentence, i + 1, end);
}

