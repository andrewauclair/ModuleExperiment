#ifndef LIBRARY_H
#define LIBRARY_H

#ifndef EXPORT_
#define EXPORT_
#endif

#if defined(Library_DLL)
	#if defined(Library_EXPORTS)
		#define LIBRARY_API __declspec(dllexport)
	#else
		#define LIBRARY_API __declspec(dllimport)
	#endif
#else
#define LIBRARY_API
#endif

EXPORT_ namespace Library
{
	EXPORT_ class LIBRARY_API Test
	{
	public:
		Test(int value);

		int getValue() const;

		int complex_calculation() const;

		void change_internal_value();
		int internal_value();

		static const int static_value;
		//inline static const int static_value = 5;
	private:
		int value;
	};

	inline int Test::getValue() const
	{
		return value;
	}
}

#endif
