#ifndef LIBRARY_H
#define LIBRARY_H

#if defined(Library_DLL)
	#if defined(Library_EXPORTS)
		#define LIBRARY_API __declspec(dllexport)
	#else
		#define LIBRARY_API __declspec(dllimport)
	#endif
#else
#define LIBRARY_API
#endif

namespace Library
{
	class LIBRARY_API Test
	{
	public:
		Test(int value);

		int getValue() const;

		static const int static_value;
	private:
		int value;
	};

	inline int Test::getValue() const
	{
		return value;
	}
}

#endif
