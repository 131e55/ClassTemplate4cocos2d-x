/*******************************************************************************
    File: <{SCENE_CLASS_NAME}>.cpp
*******************************************************************************/

#include "<{SCENE_CLASS_NAME}>.h"

USING_NS_CC;

Scene* <{SCENE_CLASS_NAME}>::createScene(<{ARGUMENT_TYPE}> <{ARGUMENT_NAME}>)
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = <{SCENE_CLASS_NAME}>::create();
    layer->_initWithArg(<{ARGUMENT_NAME}>);
    
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

void <{SCENE_CLASS_NAME}>::_initWithArg(<{ARGUMENT_TYPE}> <{ARGUMENT_NAME}>)
{
    
}

void <{SCENE_CLASS_NAME}>::_transition(const std::string name)
{
    TransitionCrossFade* transition = NULL;    // クラスは好きに変える
    float time = 0.5f;                         // 遷移にかかる時間

    /*
    if (name == <{SCENE_NAME}>) {
        transition = TransitionCrossFade::create(time, <{NEXT_SCENE_CLASS_NAME}>::createScene());
    }
    else if (name == <{OTHER_SCENE_NAME}>) {
        transition = TransitionCrossFade::create(time, <{OTHER_NEXT_SCENE_CLASS_NAME}>::createScene());
    }
    */

    if (transition != NULL) {
        Director::getInstance()->replaceScene(transition);
    }
    else {
        log("_transition(): scene named %s is not found", name.c_str());
    }
}
