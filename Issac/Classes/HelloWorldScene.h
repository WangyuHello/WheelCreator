#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    cocos2d::Sprite *headSprite;
    cocos2d::Sprite *bodySprite;
    cocos2d::Sprite *bullet;
    cocos2d::Texture2D *texture;
    int bulletOffsetX = 0, bulletOffsetY = 0;
    bool bulletEnable = false;
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    void update(float delta);
    
    bool isKeyPressed(cocos2d::EventKeyboard::KeyCode);
    void keyPressedDuration(cocos2d::EventKeyboard::KeyCode);
    void swapTexture(cocos2d::Sprite*, cocos2d::Texture2D* , const cocos2d::Rect &);
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
private:
    std::map<cocos2d::EventKeyboard::KeyCode, bool> keys;
};

#endif // __HELLOWORLD_SCENE_H__
