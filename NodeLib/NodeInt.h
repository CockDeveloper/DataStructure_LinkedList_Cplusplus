namespace NodeLib
{
    typedef struct NodeInt
    {
        int data;
        struct NodeInt *next;
    }tNodeInt;

    /*Method: InsertFront ==> Returning the new head pointer
     *@param NodeInt* head => head of list
     *@param int data => data of node insert
     *
     *@return NodeInt* => return new head
     */
    tNodeInt* InsertAtHead(tNodeInt *head, int data);

    /*Method: InsertFront ==> //Updating the head pointer by passing it by reference
     *@param NodeInt* head => head of list
     *@param int data => data of node insert
     *
     *@return bool => return true if successfully, otherwise return false
     */
    bool InsertAtHead(tNodeInt **head, int data);

    /*InsertNth: Method do insert into list at position
     *position will always be at least 0 and less than
     *the number of the elements in the list.
     *@param NodeInt* head of list
     *@param int data of new node
     *@param int position of new node
     *
     *@return tNodeInt* head of list
     */
    tNodeInt* InsertNth(tNodeInt *head, int data, int position);

    /*InsertNth: Method do delete element on list at position
     *position will always be at least 0 and less than
     *the number of the elements in the list.
     *@param NodeInt* head of list
     *@param int position of new node
     *
     *@return tNodeInt* head of list
     */
    tNodeInt* Delete(tNodeInt *head, int position);

    /*Reverse: Method do reverse elements of a linked list
     *head pointer input could be NULL as well for empty list
     *@param NodeInt* head of list
     *
     *@return tNodeInt* head of list reverse
     */
    tNodeInt* Reverse(tNodeInt *head);

    /*Print: Method do print elements of a linked list on console 
     *head pointer input could be NULL as well for empty list
     *@param NodeInt* head => head of list
     *
     *@return void
     */
    void Print(tNodeInt *head);

    /*ReversePrint: Method do print elements of a linked list reverse on console 
     *head pointer input could be NULL as well for empty list
     *@param NodeInt* head of list
     *
     *@return void
     */
    void ReversePrint(tNodeInt *head);
}