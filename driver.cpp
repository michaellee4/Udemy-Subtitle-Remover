#include <fstream>
#include <iostream>
#include <experimental/filesystem>
using namespace std;
namespace fs = std::experimental::filesystem;

int main(int argc, char const *argv[])
{
	fs::path dir = "<Udemy Directory>";
		for(auto& q : fs::recursive_directory_iterator(dir)){
			if(q.path().extension() == ".srt"||q.path().extension() == ".vtt")
				fs::remove(q.path());
		}
	/* code */	
	return 0;
}