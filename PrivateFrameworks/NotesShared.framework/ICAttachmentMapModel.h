/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentMapModel : ICAttachmentModel {
    MKMapSnapshotter *_mapSnapshotter;
}

@property (retain) MKMapSnapshotter *mapSnapshotter;

+ (id)contentInfoTextWithAttachmentCount:(unsigned int)arg1;

- (void).cxx_destruct;
- (BOOL)generateAsynchronousPreviews;
- (void)generatePreviews;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (BOOL)hasPreviews;
- (id)mapSnapshotter;
- (BOOL)needToGeneratePreviews;
- (void)setMapSnapshotter:(id)arg1;

@end