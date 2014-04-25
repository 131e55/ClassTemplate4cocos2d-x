/*******************************************************************************
    File: <{SCENE_CLASS_NAME}>.cpp
*******************************************************************************/

#include "<{SCENE_CLASS_NAME}>.h"

USING_NS_CC;

Scene* <{SCENE_CLASS_NAME}>::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = <{SCENE_CLASS_NAME}>::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool <{SCENE_CLASS_NAME}>::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

    // シーンサイズの取得
    _sceneSize = Director::getInstance()->getVisibleSize();

    return true;
}