#pragma once

#include "game/actor/enemy.h"
#include "game/graphics/model/model.h"

class DoorBase : public Enemy { // Size: 0x18A8
public:
    SEAD_RTTI_OVERRIDE(DoorBase, Enemy);

    DoorBase(const ActorBuildInfo *buildInfo);
    virtual ~DoorBase();

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    virtual void vf4E4(); // deleted
    virtual void ZOrder();
    DECLARE_STATE_VIRTUAL(DoorBase, Unk1);
    DECLARE_STATE_VIRTUAL(DoorBase, Unk2);
    DECLARE_STATE_VIRTUAL(DoorBase, Unk3);
    DECLARE_STATE_VIRTUAL(DoorBase, Unk4);
    virtual bool isCurrentStateUnk3();
    virtual u32  vf55C();
    virtual void vf564(); // deleted
    virtual void vf56C(); // deleted
    virtual void loadModel();
    virtual void initHitboxCollider();
    virtual void vf584();
    virtual void vf58C();
    virtual void vf594();
    virtual void playOpenDoorSound();
    virtual void vf5A4();
    virtual void playCloseDoorSound();
    virtual void vf5B4();
    virtual void vf5BC();
    virtual u32  vf5C4();

    static void colliderCallback(HitboxCollider* hcSelf, HitboxCollider* hcOther);

    ModelWrapper* mModel;
    u32 _1884;
    u32 _1888;
    u32 _188C;
    u32 _1890;
    u32 _1894;
    bool _1898;
    u32 _189C;
    u32 _18A0;
    s32 _18A4;
};
