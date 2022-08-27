
#pragma once


#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>
#include "nlohmann/json.hpp"


//======================================================================
nlohmann::json film1{
   {"name" , "Fall"},
   {"country creater", "USA" ,},
   {"create date", 2022 },
   {"director", "Scott Mann" },
   { "actors"," Grace Fulton, Virginia Gardner , Jeffrey Dean Morgan, Brianna Hildebrand,Mason Gooding, Jasper Cole" }

};

nlohmann::json film2{
  {"name", "Batman"},
  {"country creater", "USA"},
  {"create date", 2022},
  {"director", "Matt Reeves"},
  {"actors" , "Robert Pattinson, Jeffrey Wright , Zoe Kravitz, Paul Dano , John Turturro"}
};

nlohmann::json film3{
  {"name", "The Contractor"},
  {"coutry creater", "USA"},
  {"create date", 2022},
  {"director", "Tarik Saleh"},
  {"actors", "Chris Pine, Gillian Jacobs, Ben Foster, Eddie Marsan, Fares Fares "}
};

nlohmann::json film4{
  {"name", "Liked"},
  {"country creater", "USA"},
  {"create date", 2019},
  {"director","Marja-Lewis Ryan"},
  {"actors", "Virginia Gardner , Logan Paul, Betsy Sodaro ,Sam Lerner, Amy Okuda"}
};

nlohmann::json film5{
  {"name", "Fate of a Sport "},
  {"country creater","USA"},
  {"create date", 2022},
  {"director"," Michael Doneger"},
  {"actors", "Jeffrey Wright, Peter Berg, Seth Meyers , Dylan Dreyer"}
};