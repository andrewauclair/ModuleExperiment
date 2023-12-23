import std;
import Library;

int main()
{
	auto test = Library::Test(Library::Test::static_value);

	std::cout << test.complex_calculation();
}
