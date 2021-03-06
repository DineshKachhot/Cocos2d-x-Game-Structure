//
//  AppManager.cpp
//  EmptyGame
//
//  Created by Mikel Eizagirre on 2014-12-24.
//
//

#include "AppManager.h"
#include "SceneManager.h"

// Singleton
AppManager * AppManager::_instance = NULL;

AppManager* AppManager::getInstance()
{
    if(!_instance) _instance = new AppManager();
    return _instance;
}

AppManager::AppManager()
{

}

AppManager::~AppManager()
{
    
}

void AppManager::exitToMainMenu()
{
    SceneManager::getInstance()->runSceneWithType(SceneType::MAINMENU);
}
