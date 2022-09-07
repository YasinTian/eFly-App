//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TuSDKStickerPositionInfo : NSObject
{
    unsigned long long _frameInterval;
    unsigned long long _modelType;
    unsigned long long _posType;
    long long _renderType;
    double _ratio;
    double _scale;
    double _offsetX;
    double _offsetY;
    double _rotation;
    long long _loopMode;
    unsigned long long _loopStartIndex;
    NSArray *_resourceList;
    struct CGSize _modelSize;
    struct CGSize _designScreenSize;
}

@property(retain, nonatomic) NSArray *resourceList; // @synthesize resourceList=_resourceList;
@property(readonly, nonatomic) unsigned long long loopStartIndex; // @synthesize loopStartIndex=_loopStartIndex;
@property(readonly, nonatomic) long long loopMode; // @synthesize loopMode=_loopMode;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(readonly, nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(readonly, nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(readonly, nonatomic) unsigned long long posType; // @synthesize posType=_posType;
@property(readonly, nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) struct CGSize designScreenSize; // @synthesize designScreenSize=_designScreenSize;
@property(readonly, nonatomic) struct CGSize modelSize; // @synthesize modelSize=_modelSize;
- (void).cxx_destruct;
- (_Bool)hasAnimationSupported;
@property(readonly, nonatomic) unsigned long long frameInterval; // @synthesize frameInterval=_frameInterval;
- (id)initWithJson:(id)arg1;

@end
