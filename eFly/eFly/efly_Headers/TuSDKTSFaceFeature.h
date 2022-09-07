//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TuSDKTSFaceFeature : NSObject
{
    _Bool _hasLeftEyePosition;
    _Bool _hasRightEyePosition;
    _Bool _hasMouthPosition;
    _Bool _hasTrackingID;
    _Bool _hasTrackingFrameCount;
    _Bool _hasFaceAngle;
    _Bool _hasFaceYawAngle;
    _Bool _hasSmile;
    _Bool _leftEyeClosed;
    _Bool _rightEyeClosed;
    int _trackingID;
    int _trackingFrameCount;
    float _faceAngle;
    float _faceYawAngle;
    struct CGPoint _leftEyePosition;
    struct CGPoint _rightEyePosition;
    struct CGPoint _mouthPosition;
    CDStruct_1b6d18a9 _timestamp;
    struct CGRect _bounds;
}

@property(nonatomic) CDStruct_1b6d18a9 timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property(nonatomic) _Bool leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property(nonatomic) _Bool hasSmile; // @synthesize hasSmile=_hasSmile;
@property(nonatomic) float faceYawAngle; // @synthesize faceYawAngle=_faceYawAngle;
@property(nonatomic) _Bool hasFaceYawAngle; // @synthesize hasFaceYawAngle=_hasFaceYawAngle;
@property(nonatomic) float faceAngle; // @synthesize faceAngle=_faceAngle;
@property(nonatomic) _Bool hasFaceAngle; // @synthesize hasFaceAngle=_hasFaceAngle;
@property(nonatomic) int trackingFrameCount; // @synthesize trackingFrameCount=_trackingFrameCount;
@property(nonatomic) _Bool hasTrackingFrameCount; // @synthesize hasTrackingFrameCount=_hasTrackingFrameCount;
@property(nonatomic) int trackingID; // @synthesize trackingID=_trackingID;
@property(nonatomic) _Bool hasTrackingID; // @synthesize hasTrackingID=_hasTrackingID;
@property(nonatomic) struct CGPoint mouthPosition; // @synthesize mouthPosition=_mouthPosition;
@property(nonatomic) _Bool hasMouthPosition; // @synthesize hasMouthPosition=_hasMouthPosition;
@property(nonatomic) struct CGPoint rightEyePosition; // @synthesize rightEyePosition=_rightEyePosition;
@property(nonatomic) _Bool hasRightEyePosition; // @synthesize hasRightEyePosition=_hasRightEyePosition;
@property(nonatomic) struct CGPoint leftEyePosition; // @synthesize leftEyePosition=_leftEyePosition;
@property(nonatomic) _Bool hasLeftEyePosition; // @synthesize hasLeftEyePosition=_hasLeftEyePosition;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;

@end

