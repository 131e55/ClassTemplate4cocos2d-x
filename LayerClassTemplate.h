/*******************************************************************************
    File: <{LAYER_CLASS_NAME}>.h
*******************************************************************************/

#ifndef <{MACRO_NAME}>
#define <{MACRO_NAME}>

#include "cocos2d.h"

class <{LAYER_CLASS_NAME}> : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Layer* createLayer(<{ARGUMENT_TYPE}> <{ARGUMENT_NAME}>);
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(<{LAYER_CLASS_NAME}>);

private:
    // レイヤのサイズ (画面全体のサイズ) を取得するのは,
    // "Size hoge = Director::getInstance()->getVisibleSize();"
    // でできるけど長いうえによく使うので最初に取得してその後ずっと持っておくことにする
    cocos2d::Size _layerSize;

    // _layerSize.width, _layerSize.height を直接
    float _layerWidth;
    float _layerHeight;

    // もともと作られてる init() は引数を持たせられないみたいなので,
    // 引数を createLayer() で受け取り _initWithArg() へ横流しすることにする
    void _initWithArg(<{ARGUMENT_TYPE}> <{ARGUMENT_NAME}>);
};

#endif /* defined(<{MACRO_NAME}>) */