#pragma once
using namespace WMPLib;
ref class Sounds
{
private:
	WindowsMediaPlayer^ pl = gcnew WindowsMediaPlayer();
	public:
		void Wind() {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "Wind.wav";
			player->Load();
			player->PlayLooping();
		}
		void menustart() {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "MenuStart.wav";
			player->Load();
			player->PlayLooping();
		}
		void menuin() {
			pl->URL = "MoveB.wav";
			pl->controls->play();
		}
		void PereWind() {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "PereWind.wav";
			player->Load();
			player->Play();
		}
};

