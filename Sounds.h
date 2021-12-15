#pragma once
using namespace WMPLib;
ref class Sounds
{
private:
	WindowsMediaPlayer^ pl = gcnew WindowsMediaPlayer();
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
	public:
		void Wind() {
			player->SoundLocation = "Wind.wav";
			player->Load();
			player->PlayLooping();
		}
		void menustart() {
			player->SoundLocation = "MenuStart.wav";
			player->Load();
			player->PlayLooping();
		}
		void menuin() {
			pl->URL = "MoveB.wav";
			pl->controls->play();
		}
		void PereWind() {
			player->SoundLocation = "PereWind.wav";
			player->Load();
			player->Play();
		}
};

