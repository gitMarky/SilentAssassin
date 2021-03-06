#include Library_Mission_Script

func InitializePlayer(int player)
{
	_inherited(player, ...);
	
	// Set zoom and move player to the middle of the scenario.
	SetPlayerZoomByViewRange(player, LandscapeWidth(), nil, PLRZOOM_Direct);
	GetCrew(player)->SetPosition(120, 190);
	GetCrew(player)->MakeInvincible();
	GetCrew(player)->CreateContents(Item_Axe);
	GetCrew(player)->CreateContents(Item_Hammer);
	return true;
}

func Initialize()
{
	var bot = CreateObject(Character_Human, 150, 190);
	AI_Type_Civilian->AddAI(bot);
}
