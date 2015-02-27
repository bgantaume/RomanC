#include "CppUTest/TestHarness.h"

extern "C"
{
#include "Decode.h"
}

TEST_GROUP(Roman)
{
	void setup()
	{
	}

	void teardown() 
	{
	}
};

TEST(Roman, Decode_I)
{
	CHECK_EQUAL(1, roman_decode("I"));
}

TEST(Roman, Decode_V)
{
	CHECK_EQUAL(5, roman_decode("V"));
}

TEST(Roman, Decode_X)
{
	CHECK_EQUAL(10, roman_decode("X"));
}

TEST(Roman, Decode_XV)
{
	CHECK_EQUAL(15, roman_decode("XV"));
}

TEST(Roman, Decode_XIV)
{
	CHECK_EQUAL(14, roman_decode("XIV"));
}

TEST(Roman, Decode_MCMLIV)
{
	CHECK_EQUAL(1954, roman_decode("MCMLIV"));
}

