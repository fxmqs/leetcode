#include "Solution68.h"



Solution68::Solution68()
{
}


Solution68::~Solution68()
{
}


TEST(Solution68_t, test3)
{
	Solution68 test;

	vector<string> in({ "What","must","be","acknowledgment","shall","be" });
	vector<string> out({ 
		"What   must   be",
		"acknowledgment  ",
		"shall be        " });

	EXPECT_EQ(test.fullJustify(in, 16), out);
}

TEST(Solution68_t, test2)
{
	Solution68 test;

	vector<string> in({ "This", "is", "an", "example", "of", "text", "justification." });
	vector<string> out({ "This    is    an",
		"example  of text",
		"justification.  " });

	EXPECT_EQ(test.fullJustify(in, 16), out);
}
TEST(Solution68_t, test4)
{
	Solution68 test;

	vector<string> in({ "Science","is","what","we","understand","well","enough","to","explain",
		"to","a","computer.","Art","is","everything","else","we","do" });
	vector<string> out({
		"Science  is  what we",
		"understand      well",
		"enough to explain to",
		"a  computer.  Art is",
		"everything  else  we",
		"do                  " });

	EXPECT_EQ(test.fullJustify(in, 20), out);
}
