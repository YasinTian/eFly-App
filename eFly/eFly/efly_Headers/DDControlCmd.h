//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncUdpSocketDelegate-Protocol.h"

@class DDControlData, GCDAsyncUdpSocket, NSString;
@protocol OS_dispatch_source;

@interface DDControlCmd : NSObject <GCDAsyncUdpSocketDelegate>
{
    long long _tag;
    _Bool _bStart;
    GCDAsyncUdpSocket *_udpSocket;
    _Bool _tutorshipOperating;
    _Bool _isStartTimer;
    NSObject<OS_dispatch_source> *_timer;
    double _outputValue;
    _Bool _bLoopRunning;
    _Bool _dateSourceJoystick;
    _Bool _tol;
    _Bool _carefred;
    _Bool _followme;
    _Bool _landing;
    DDControlData *_controlData;
    DDControlData *_controlDataOfTrace;
    unsigned long long _mode;
    unsigned long long _onOff;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool landing; // @synthesize landing=_landing;
@property(nonatomic) _Bool followme; // @synthesize followme=_followme;
@property(nonatomic) _Bool carefred; // @synthesize carefred=_carefred;
@property(nonatomic) _Bool tol; // @synthesize tol=_tol;
@property(nonatomic) unsigned long long onOff; // @synthesize onOff=_onOff;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) DDControlData *controlDataOfTrace; // @synthesize controlDataOfTrace=_controlDataOfTrace;
@property(retain, nonatomic) DDControlData *controlData; // @synthesize controlData=_controlData;
@property(nonatomic) _Bool dateSourceJoystick; // @synthesize dateSourceJoystick=_dateSourceJoystick;
@property(nonatomic) _Bool bLoopRunning; // @synthesize bLoopRunning=_bLoopRunning;
- (void).cxx_destruct;
- (void)notifyStepToUI;
- (void)stepPlus;
- (void)startTimer;
- (id)resetOutputValue:(id)arg1;
- (_Bool)checkIsOperate:(id)arg1;
- (id)getTutorshipControlData:(id)arg1 step:(unsigned long long)arg2;
- (int)alarmData:(char *)arg1;
- (int)sendAlarmData;
- (void)alarmRequest;
- (int)calibrationData:(char *)arg1 operation:(int)arg2 subcode1:(int)arg3 subcode2:(int)arg4;
- (int)sendCalibration:(int)arg1 subcode1:(int)arg2 subcode2:(int)arg3;
- (void)calibrationMagnetometerRequest;
- (void)calibrationGryoRequest;
- (int)snData:(char *)arg1;
- (int)sendSnData;
- (void)snRequest;
- (int)versionData:(char *)arg1;
- (int)sendVersionData;
- (void)versionRequest;
- (void)sendDatOfType:(unsigned long long)arg1;
- (void)rotateRight:(_Bool)arg1;
- (void)rotateLeft:(_Bool)arg1;
- (void)fallDown:(_Bool)arg1;
- (void)riseUp:(_Bool)arg1;
- (void)towardsRight:(_Bool)arg1;
- (void)towardsLeft:(_Bool)arg1;
- (void)backOff:(_Bool)arg1;
- (void)goForward:(_Bool)arg1;
- (void)controlDataTheta:(float)arg1 source:(int)arg2;
- (void)controlDataTheta:(float)arg1;
- (void)controlDataPhi:(float)arg1 source:(int)arg2;
- (void)controlDataPhi:(float)arg1;
- (void)controlDataYaw:(float)arg1 source:(int)arg2;
- (void)controlDataYaw:(float)arg1;
- (void)controlDataGaz:(float)arg1 source:(int)arg2;
- (void)controlDataGaz:(float)arg1;
- (float)bound:(float)arg1;
- (void)clearControlData;
- (void)stopSendData;
- (void)sendRCData;
- (int)sendControlData;
- (int)controlData:(char *)arg1 cData:(id)arg2 mode:(int)arg3 kill:(int)arg4 tol:(_Bool)arg5 carefree:(_Bool)arg6 followme:(_Bool)arg7 landing:(_Bool)arg8;
- (void)sendCmd:(char *)arg1 length:(int)arg2;
- (void)udpClose;
- (void)udpSetup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

