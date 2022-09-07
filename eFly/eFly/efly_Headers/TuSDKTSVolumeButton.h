//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface TuSDKTSVolumeButton : NSObject
{
    _Bool _isStealingVolumeButtons;
    _Bool _hadToLowerVolume;
    _Bool _hadToRaiseVolume;
    _Bool _suspended;
    float _launchVolume;
    CDUnknownBlockType _volumeBlock;
    UIView *_volumeView;
}

@property(retain, nonatomic) UIView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) float launchVolume; // @synthesize launchVolume=_launchVolume;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool hadToRaiseVolume; // @synthesize hadToRaiseVolume=_hadToRaiseVolume;
@property(nonatomic) _Bool hadToLowerVolume; // @synthesize hadToLowerVolume=_hadToLowerVolume;
@property(nonatomic) _Bool isStealingVolumeButtons; // @synthesize isStealingVolumeButtons=_isStealingVolumeButtons;
@property(copy, nonatomic) CDUnknownBlockType volumeBlock; // @synthesize volumeBlock=_volumeBlock;
- (void).cxx_destruct;
- (void)initializeVolumeButtonStealer;
- (void)dealloc;
- (void)_stopListenVolumeButtonEvents;
- (void)stopListenVolumeButtonEvents;
- (void)resumeStealingVolumeButtonEvents:(id)arg1;
- (void)suspendStealingVolumeButtonEvents:(id)arg1;
- (void)_startListenVolumeButtonEvents;
- (void)startListenVolumeButtonEvents;
- (void)volumeUp;
- (void)volumeDown;

@end
