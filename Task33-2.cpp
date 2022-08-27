
#include "Task33-2.h"

int main()
{
  /*
  std::map<std::string, nlohmann::json> films{ {"Fall", film1}, {"Batmen", film2}, 
											  {"The Contractor", film3},{"Liked", film4}, {"Fate of a Sport", film5} };
  nlohmann::json j_film(films);
  std::ofstream file("record.json");
  file << std::setw(4) << films;
  file.close();
  */
  
  
  std::ifstream inFile("record.json");
  nlohmann::json inFilms;
  inFile >> inFilms;
  inFile.close();
  std::string actor = "Virginia Gardner";
  std::vector<std::string> actorFilms;
  for ( nlohmann::json::iterator it = inFilms.begin(); it != inFilms.end(); ++it) {
	std::string t(it.value()["actors"]);
	if (t.find(actor) != std::string::npos) actorFilms.push_back(it.key());
  }
  for (auto& el : actorFilms) std::cout << el << "  ";
  std::cout << std::endl;
  return 0;
}
