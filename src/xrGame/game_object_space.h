#pragma once

namespace GameObject
{
enum ECallbackType
{
    eTradeStart = u32(0),
    eTradeStop,
    eTradeSellBuyItem,
    eTradePerformTradeOperation,

    eZoneEnter,
    eZoneExit,
    eExitLevelBorder,
    eEnterLevelBorder,
    eDeath,

    ePatrolPathInPoint,

    eInventoryPda,
    eInventoryInfo,
    eArticleInfo,
    eTaskStateChange,
    eMapLocationAdded,

    eUseObject,

    eHit,

    eSound,

    eActionTypeMovement,
    eActionTypeWatch,
    eActionTypeRemoved,
    eActionTypeAnimation,
    eActionTypeSound,
    eActionTypeParticle,
    eActionTypeObject,

    eActorSleep,

    eHelicopterOnPoint,
    eHelicopterOnHit,

    eOnItemTake,
    eOnItemDrop,

    eScriptAnimation,

    eTraderGlobalAnimationRequest,
    eTraderHeadAnimationRequest,
    eTraderSoundEnd,

    eInvBoxItemTake,
    eWeaponNoAmmoAvailable,

    //AVO: custom callbacks
    // Input
    eKeyPress,
    eKeyRelease,
    eKeyHold,
    eMouseMove,
    eMouseWheel,
    // Inventory
    eItemToBelt,
    eItemToSlot,
    eItemToRuck,
    // Actor
    eActorBeforeDeath,
    //-AVO

    eDummy = u32(-1),
};
};
