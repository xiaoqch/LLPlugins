// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HangingActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LeashFenceKnotActor : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHFENCEKNOTACTOR
public:
    class LeashFenceKnotActor& operator=(class LeashFenceKnotActor const&) = delete;
    LeashFenceKnotActor(class LeashFenceKnotActor const&) = delete;
    LeashFenceKnotActor() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcoded(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~LeashFenceKnotActor();
    /*2*/ virtual void remove();
    /*3*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual float getInterpolatedHeadRot(float) const;
    /*6*/ virtual float getInterpolatedBodyYaw(float) const;
    /*7*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*10*/ virtual float getRidingHeight();
    /*11*/ virtual void __unk_vfn_2();
    /*12*/ virtual void __unk_vfn_3();
    /*13*/ virtual float getCameraOffset() const;
    /*14*/ virtual float getShadowRadius() const;
    /*15*/ virtual void __unk_vfn_4();
    /*16*/ virtual void __unk_vfn_5();
    /*17*/ virtual void playerTouch(class Player&);
    /*18*/ virtual bool isPickable();
    /*19*/ virtual void __unk_vfn_6();
    /*20*/ virtual bool isSleeping() const;
    /*21*/ virtual void setSleeping(bool);
    /*22*/ virtual void __unk_vfn_7();
    /*23*/ virtual bool isBlocking() const;
    /*24*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*25*/ virtual void __unk_vfn_8();
    /*26*/ virtual bool isSurfaceMob() const;
    /*27*/ virtual void __unk_vfn_9();
    /*28*/ virtual void __unk_vfn_10();
    /*29*/ virtual void __unk_vfn_11();
    /*30*/ virtual class Actor* findAttackTarget();
    /*31*/ virtual bool isValidTarget(class Actor*) const;
    /*32*/ virtual void adjustDamageAmount(int&) const;
    /*33*/ virtual void onTame();
    /*34*/ virtual void onFailedTame();
    /*35*/ virtual bool isJumping() const;
    /*36*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*37*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*38*/ virtual void animateHurt();
    /*39*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*40*/ virtual float getPickRadius();
    /*41*/ virtual void awardKillScore(class Actor&, int);
    /*42*/ virtual int /*enum enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*43*/ virtual int /*enum enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum enum ArmorSlot*/) const;
    /*44*/ virtual float getArmorColorInSlot(int /*enum enum ArmorSlot*/, int) const;
    /*45*/ virtual void setEquippedSlot(int /*enum enum EquipmentSlot*/, class ItemStack const&);
    /*46*/ virtual class HashedString const& queryEntityRenderer() const;
    /*47*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*48*/ virtual bool canFreeze() const;
    /*49*/ virtual int getPortalWaitTime() const;
    /*50*/ virtual bool canChangeDimensions() const;
    /*51*/ virtual void __unk_vfn_12();
    /*52*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*53*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*54*/ virtual bool canBePulledIntoVehicle() const;
    /*55*/ virtual bool inCaravan() const;
    /*56*/ virtual void __unk_vfn_13();
    /*57*/ virtual bool canSynchronizeNewEntity() const;
    /*58*/ virtual void buildDebugInfo(std::string&) const;
    /*59*/ virtual int getDeathTime() const;
    /*60*/ virtual void swing();
    /*61*/ virtual void __unk_vfn_14();
    /*62*/ virtual void __unk_vfn_15();
    /*63*/ virtual float getYHeadRot() const;
    /*64*/ virtual bool isWorldBuilder() const;
    /*65*/ virtual void __unk_vfn_16();
    /*66*/ virtual bool isAdventure() const;
    /*67*/ virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);
    /*68*/ virtual bool canDestroyBlock(class Block const&) const;
    /*69*/ virtual void setAuxValue(int);
    /*70*/ virtual void setSize(float, float);
    /*71*/ virtual void stopSpinAttack();
    /*72*/ virtual void __unk_vfn_17();
    /*73*/ virtual void __unk_vfn_18();
    /*74*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*75*/ virtual void __unk_vfn_19();
    /*76*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*77*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*78*/ virtual void __unk_vfn_20();
    /*79*/ virtual void _onSizeUpdated();
    /*80*/ virtual void __unk_vfn_21();
    /*81*/ virtual void setDir(int);
    /*82*/ virtual int getWidth() const;
    /*83*/ virtual int getHeight() const;
    /*84*/ virtual void dropItem();
    /*85*/ virtual bool placeHangingEntity(class BlockSource&, int);
    /*86*/ virtual bool wouldSurvive(class BlockSource&);
    /*
    inline void addAdditionalSaveData(class CompoundTag& a0){
        void (LeashFenceKnotActor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?addAdditionalSaveData@LeashFenceKnotActor@@UEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline void readAdditionalSaveData(class CompoundTag const& a0, class DataLoadHelper& a1){
        void (LeashFenceKnotActor::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?readAdditionalSaveData@LeashFenceKnotActor@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class DataLoadHelper&>(a1));
    }
    */
    MCAPI LeashFenceKnotActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI int numberofAnimalsAttached();
    MCAPI void removeAnimals(class Player*);

protected:

private:

};