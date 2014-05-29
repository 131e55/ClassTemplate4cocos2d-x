/*******************************************************************************
    File: <{LAYER_CLASS_NAME}>.cpp
*******************************************************************************/

#include "<{LAYER_CLASS_NAME}>.h"

USING_NS_CC;

Layer* <{LAYER_CLASS_NAME}>::createLayer(<{ARGUMENT_TYPE}> <{ARGUMENT_NAME}>)
{
    // 'layer' is an autorelease object
    auto layer = <{LAYER_CLASS_NAME}>::create();
    layer->_initWithArg(<{ARGUMENT_NAME}>);

    // return the layer
    return layer;
}

// on "init" you need to initialize your instance
bool <{LAYER_CLASS_NAME}>::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

    // シーンサイズの取得
    _layerSize = Director::getInstance()->getVisibleSize();
    _layerWidth = _layerSize.width;
    _layerHeight = _layerSize.height;

    return true;
}

void <{LAYER_CLASS_NAME}>::_initWithArg(<{ARGUMENT_TYPE}> <{ARGUMENT_NAME}>)
{

}
