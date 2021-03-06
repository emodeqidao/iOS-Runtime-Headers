/* Generated by RuntimeBrowser.
 */

@protocol PUMapAnnotationAnimatable <NSObject, MKAnnotation, NSCopying>

@required

- (int)annotationSortingCompareWithAnnotation:(id <PUMapAnnotationAnimatable>)arg1;
- (NSString *)compactDescription;
- (int)compare:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (unsigned int)count;
- (NSDate *)dateCreated;
- (NSObject *)itemId;
- (NSArray *)mapItems;
- (NSArray *)newestMaxMapItems:(unsigned int)arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (unsigned int)relativeOrder;
- (void)resetCoordinateToOriginal;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setRelativeOrder:(unsigned int)arg1;
- (NSMutableSet *)subAnnotations;

@end
