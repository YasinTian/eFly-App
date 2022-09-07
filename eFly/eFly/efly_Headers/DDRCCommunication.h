//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncUdpSocketDelegate-Protocol.h"

@class GCDAsyncUdpSocket, NSString;

@interface DDRCCommunication : NSObject <GCDAsyncUdpSocketDelegate>
{
    long long _tag;
    int _preStatus;
    int _preBtnStatus;
    int _btnStatus;
    _Bool _isInit;
    int _switchValue;
    int _gpsLevel;
    int _sensorErrInt;
    int _gpsErrorStatus;
    _Bool _isSynced;
    _Bool _bLoopRunning;
    GCDAsyncUdpSocket *_udpSocket;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GCDAsyncUdpSocket *udpSocket; // @synthesize udpSocket=_udpSocket;
@property(nonatomic) _Bool bLoopRunning; // @synthesize bLoopRunning=_bLoopRunning;
- (void).cxx_destruct;
- (_Bool)rcSynced;
- (void)tyrSendSyncStatus;
- (void)sendConfig;
- (void)updateSensor:(_Bool)arg1;
- (void)updateGPS:(int)arg1 gpsLevel:(int)arg2;
- (void)updateSwitchValue:(int)arg1;
- (void)updateAllData:(int)arg1 gpsLevel:(int)arg2 sensorErr:(_Bool)arg3;
- (void)initHttpData;
- (void)clearRCButtonStatus;
- (void)parseKeyEvent;
- (int)getRecBtnStatus:(int)arg1;
- (int)getCamBtnStatus:(int)arg1;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)sendHello;
- (void)udpSetup;
- (void)stopReceiveData;
- (void)receiveData;
- (void)sendRCConnectSSID:(id)arg1;
- (void)sendMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
