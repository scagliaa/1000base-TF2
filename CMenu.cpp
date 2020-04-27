#include "Main.h"

void CMenu::Menu() {
	ImGui::GetIO().MouseDrawCursor = g_Vars->Menu.Opened;
	if (g_Vars->Menu.Opened) {

		ImGui::Begin("1000base", &g_Vars->Menu.Opened, ImVec2(400, 300), 1.0f); {
			if (I::Engine->IsInGame() && I::Engine->IsConnected())
				ImGui::Text("Local player has spawned!");

			ImGui::PushFont(g_Globals->Font1);
			ImGui::Text("Cool-io");
			ImGui::PopFont();
			ImGui::PushFont(g_Globals->Font2);
			ImGui::Text("CertT");
			ImGui::PopFont();
		}
		ImGui::End();
	}
}