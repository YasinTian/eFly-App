//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLConnection, NSURLRequest, UILocalNotification;

@interface TuSDKNetworkOperation : NSOperation <NSURLConnectionDataDelegate>
{
    int _state;
    _Bool _freezable;
    int _postDataEncoding;
    _Bool _shouldCacheResponseEvenIfProtocolIsHTTPS;
    _Bool _shouldNotCacheResponse;
    _Bool _shouldContinueWithInvalidCertificate;
    _Bool _shouldSendAcceptLanguageHeader;
    _Bool _shouldShowLocalNotificationOnError;
    _Bool _isCancelled;
    unsigned long long _cacheDuration;
    unsigned long long _imageHeadRequestDuration;
    unsigned long long _imageCacheDuration;
    unsigned long long _requestTimeout;
    unsigned long long _stringEncoding;
    NSError *_error;
    NSMutableDictionary *_cacheHeaders;
    NSString *_clientCertificate;
    NSString *_clientCertificatePassword;
    CDUnknownBlockType _authHandler;
    CDUnknownBlockType _operationStateChangedHandler;
    unsigned long long _credentialPersistence;
    UILocalNotification *_localNotification;
    NSURLConnection *_connection;
    NSString *_uniqueId;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSMutableDictionary *_fieldsToBePosted;
    NSMutableArray *_filesToBePosted;
    NSMutableArray *_dataToBePosted;
    NSString *_username;
    NSString *_password;
    NSMutableArray *_responseBlocks;
    NSMutableArray *_errorBlocks;
    NSMutableArray *_errorBlocksType2;
    NSMutableData *_mutableData;
    unsigned long long _downloadedDataSize;
    NSMutableArray *_notModifiedHandlers;
    NSMutableArray *_uploadProgressChangedHandlers;
    NSMutableArray *_downloadProgressChangedHandlers;
    CDUnknownBlockType _postDataEncodingHandler;
    long long _startPosition;
    NSMutableArray *_downloadStreams;
    NSData *_cachedResponse;
    CDUnknownBlockType _cacheHandlingBlock;
    struct __SecTrust *_serverTrust;
    unsigned long long _backgroundTaskId;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(nonatomic) struct __SecTrust *serverTrust; // @synthesize serverTrust=_serverTrust;
@property(copy, nonatomic) CDUnknownBlockType cacheHandlingBlock; // @synthesize cacheHandlingBlock=_cacheHandlingBlock;
@property(copy, nonatomic) NSData *cachedResponse; // @synthesize cachedResponse=_cachedResponse;
@property(retain, nonatomic) NSMutableArray *downloadStreams; // @synthesize downloadStreams=_downloadStreams;
@property(nonatomic) long long startPosition; // @synthesize startPosition=_startPosition;
@property(copy, nonatomic) CDUnknownBlockType postDataEncodingHandler; // @synthesize postDataEncodingHandler=_postDataEncodingHandler;
@property(retain, nonatomic) NSMutableArray *downloadProgressChangedHandlers; // @synthesize downloadProgressChangedHandlers=_downloadProgressChangedHandlers;
@property(retain, nonatomic) NSMutableArray *uploadProgressChangedHandlers; // @synthesize uploadProgressChangedHandlers=_uploadProgressChangedHandlers;
@property(retain, nonatomic) NSMutableArray *notModifiedHandlers; // @synthesize notModifiedHandlers=_notModifiedHandlers;
@property(nonatomic) unsigned long long downloadedDataSize; // @synthesize downloadedDataSize=_downloadedDataSize;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSMutableArray *errorBlocksType2; // @synthesize errorBlocksType2=_errorBlocksType2;
@property(retain, nonatomic) NSMutableArray *errorBlocks; // @synthesize errorBlocks=_errorBlocks;
@property(retain, nonatomic) NSMutableArray *responseBlocks; // @synthesize responseBlocks=_responseBlocks;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSMutableArray *dataToBePosted; // @synthesize dataToBePosted=_dataToBePosted;
@property(retain, nonatomic) NSMutableArray *filesToBePosted; // @synthesize filesToBePosted=_filesToBePosted;
@property(retain, nonatomic) NSMutableDictionary *fieldsToBePosted; // @synthesize fieldsToBePosted=_fieldsToBePosted;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool shouldShowLocalNotificationOnError; // @synthesize shouldShowLocalNotificationOnError=_shouldShowLocalNotificationOnError;
@property(retain, nonatomic) UILocalNotification *localNotification; // @synthesize localNotification=_localNotification;
@property(nonatomic) unsigned long long credentialPersistence; // @synthesize credentialPersistence=_credentialPersistence;
@property(copy, nonatomic) CDUnknownBlockType operationStateChangedHandler; // @synthesize operationStateChangedHandler=_operationStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType authHandler; // @synthesize authHandler=_authHandler;
@property(copy, nonatomic) NSString *clientCertificatePassword; // @synthesize clientCertificatePassword=_clientCertificatePassword;
@property(copy, nonatomic) NSString *clientCertificate; // @synthesize clientCertificate=_clientCertificate;
@property(retain, nonatomic) NSMutableDictionary *cacheHeaders; // @synthesize cacheHeaders=_cacheHeaders;
@property(nonatomic) _Bool shouldSendAcceptLanguageHeader; // @synthesize shouldSendAcceptLanguageHeader=_shouldSendAcceptLanguageHeader;
@property(nonatomic) _Bool shouldContinueWithInvalidCertificate; // @synthesize shouldContinueWithInvalidCertificate=_shouldContinueWithInvalidCertificate;
@property(nonatomic) _Bool shouldNotCacheResponse; // @synthesize shouldNotCacheResponse=_shouldNotCacheResponse;
@property(nonatomic) _Bool shouldCacheResponseEvenIfProtocolIsHTTPS; // @synthesize shouldCacheResponseEvenIfProtocolIsHTTPS=_shouldCacheResponseEvenIfProtocolIsHTTPS;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(nonatomic) unsigned long long requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property(nonatomic) unsigned long long imageCacheDuration; // @synthesize imageCacheDuration=_imageCacheDuration;
@property(nonatomic) unsigned long long imageHeadRequestDuration; // @synthesize imageHeadRequestDuration=_imageHeadRequestDuration;
@property(nonatomic) unsigned long long cacheDuration; // @synthesize cacheDuration=_cacheDuration;
- (void).cxx_destruct;
- (void)operationFailedWithError:(id)arg1;
- (void)showLocalNotification;
- (void)operationSucceeded;
- (void)responseJSONWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)responseJSONWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)responseJSON;
- (void)decompressedResponseImageOfSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)responseImage;
- (id)responseStringWithEncoding:(unsigned long long)arg1;
- (id)responseString;
- (id)responseData;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)languagesFromLocale;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isReady;
- (_Bool)isConcurrent;
- (void)start;
- (void)endBackgroundTask;
- (void)main;
- (void)setCacheHandler:(CDUnknownBlockType)arg1;
- (id)bodyData;
- (void)addFile:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3;
- (void)addFile:(id)arg1 forKey:(id)arg2;
- (void)addData:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 fileName:(id)arg4;
- (void)addData:(id)arg1 forKey:(id)arg2;
- (id)curlCommandLineString;
@property(readonly, copy) NSString *description;
- (void)setAuthorizationHeaderValue:(id)arg1 forAuthType:(id)arg2;
- (void)setHeader:(id)arg1 withValue:(id)arg2;
- (void)addHeader:(id)arg1 withValue:(id)arg2;
- (void)addHeaders:(id)arg1;
- (void)addParams:(id)arg1;
- (id)initWithURLString:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
- (void)addDownloadStream:(id)arg1;
- (void)setUploadStream:(id)arg1;
- (void)onDownloadProgressChanged:(CDUnknownBlockType)arg1;
- (void)onUploadProgressChanged:(CDUnknownBlockType)arg1;
- (void)onNotModified:(CDUnknownBlockType)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)onCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)setUsername:(id)arg1 password:(id)arg2 basicAuth:(_Bool)arg3;
- (void)setUsername:(id)arg1 password:(id)arg2;
- (void)updateOperationBasedOnPreviousHeaders:(id)arg1;
- (void)setCachedData:(id)arg1;
- (void)updateHandlersFromOperation:(id)arg1;
- (void)dealloc;
- (id)copyForRetry;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) int state;
- (void)notifyCache;
- (_Bool)isCachedResponse;
- (id)uniqueIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool freezable; // @dynamic freezable;
@property(readonly, nonatomic) long long HTTPStatusCode;
@property(readonly, copy, nonatomic) NSString *HTTPMethod;
@property(readonly, copy, nonatomic) NSDictionary *readonlyPostDictionary;
@property(readonly, nonatomic) NSHTTPURLResponse *readonlyResponse;
@property(readonly, nonatomic) NSURLRequest *readonlyRequest;
@property(readonly, copy, nonatomic) NSString *url;
- (void)setCustomPostDataEncodingHandler:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (id)encodedPostDataString;
@property(nonatomic) int postDataEncoding;
- (_Bool)isCacheable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

